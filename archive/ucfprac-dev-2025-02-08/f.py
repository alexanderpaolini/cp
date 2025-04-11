import datetime

n = int(input())

times = []
for i in range(n):
    hour, minute = map(int, input().split(":"))
    times.append(datetime.time(hour, minute))

flag = False
for i in range(2, n):
    t1 = datetime.datetime.combine(datetime.date(1, 1, 1), times[i])
    t2 = datetime.datetime.combine(datetime.date(1, 1, 1), times[i - 1])
    t3 = datetime.datetime.combine(datetime.date(1, 1, 1), times[i - 2])

    # Calculate time differences between t1 and t2, and t1 and t3
    x = t1 - t2
    y = t1 - t3

    if y.total_seconds() / 60 <= 10:
        print(0)
        exit()

    if x.total_seconds() / 60 <= 10:
        flag = True

print(1 if flag else 2)
