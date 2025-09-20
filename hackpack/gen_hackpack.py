import os
import subprocess

CURRENT_DIR = os.path.dirname(os.path.abspath(__file__))
OUT_TEX_PATH = os.path.join(CURRENT_DIR, 'hackpack.tex')

latex_content = """
\\documentclass{report}
\\usepackage{multicol}
\\usepackage{lscape}
\\usepackage{geometry}
\\geometry{margin=1cm,landscape}
\\pagestyle{empty}
\\usepackage{listings}
\\lstset{breaklines=true, postbreak=\\mbox{$\\hookrightarrow$}\\space}

\\begin{document}

\\fontsize{7}{11}\\selectfont
\\begin{multicols}{3}
\\raggedcolumns

\\chapter*{Hackpack}
"""

def process(fpath):
    global latex_content
    
    dirs = []
    files = []
    
    for entry in os.listdir(fpath):
        full_path = os.path.join(fpath, entry)
        if os.path.isdir(full_path):
            dirs.append(entry)
        else:
            files.append(entry)

    dirs.sort()
    files.sort()
    
    if 'content.tex' in files:
        full_path = os.path.join(fpath, 'content.tex')
        with open(full_path, 'r') as f:
            latex_content += f.read()
            latex_content += '\n\n'
        files.remove('content.tex')

    for file in files:
        full_file_path = os.path.join(fpath, file)
        if full_file_path.endswith('.cpp'):
            with open(full_file_path, 'r') as f:
                latex_content += "\\begin{lstlisting}\n"
                latex_content += f.read()
                latex_content += "\\end{lstlisting}\n"
    
    for dir in dirs:
        full_dir_path = os.path.join(fpath, dir)
        process(full_dir_path) 
        
def main():
    global latex_content
            
    process(CURRENT_DIR)     

    latex_content += """
\\newpage
\\newpage

\\end{multicols}
\\end{document}
"""

    with open(OUT_TEX_PATH, 'w') as tex_file:
        tex_file.write(latex_content)

    try:
        subprocess.run(
            [
                'xelatex', 
                '-output-directory', CURRENT_DIR,
                OUT_TEX_PATH
            ],
            check=True
        )
        print(f"PDF successfully generated: {OUT_TEX_PATH.replace('.tex', '.pdf')}")

        extensions_to_remove = ['.tex', '.aux', '.log', '.toc', '.out', '.lof', '.lot', '.fls', '.fdb_latexmk']
        for ext in extensions_to_remove:
            file_path = OUT_TEX_PATH.replace('.tex', ext)
            if os.path.exists(file_path):
                os.remove(file_path)
                print(f"Removed intermediate file: {file_path}")
    except subprocess.CalledProcessError as e:
        print(f"Error during PDF generation: {e}")

if __name__ == "__main__":
    main()
