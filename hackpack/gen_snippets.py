import os
import json

CURRENT_DIR = os.path.dirname(os.path.abspath(__file__))
SNIPPETS_DIR = os.path.join(CURRENT_DIR, 'snippets')
OUT_PATH = os.path.join(CURRENT_DIR, '..', '.vscode', 'snippets.code-snippets')

def main():
    json_snippets = {}
    
    for root, _dir, files in os.walk(CURRENT_DIR):
        for filename in files:
            if filename.endswith('.cpp'):
                snippet_name = filename.removesuffix('.cpp')
                
                with open(os.path.join(root, filename), 'r') as file:
                    json_snippets[snippet_name] = {
                        "prefix": snippet_name,
                        "body": file.read(),
                    }

    json_output = json.dumps(json_snippets, indent=4)
    with open(OUT_PATH, "w") as f:
            f.write(json_output)
            f.close()

    print(f"Snippets saved to {OUT_PATH}")

if __name__ == "__main__":
    main()