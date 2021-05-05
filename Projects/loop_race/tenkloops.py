from time import perf_counter


its = 10000
n = 1

start = perf_counter()
while n <= its:
    print(f"{its} loops completed\n")
    n = n + 1

finish = perf_counter()
time = round(finish - start, 1)

print(f"Time taken: {time}s")
