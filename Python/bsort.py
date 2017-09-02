def bsort(*args):
    lst = list(args)
    for i in range(len(lst)-1, 0, -1):
        for j in range(0, i):
            if lst[j] > lst[j+1]:
                tmp = lst[j]
                lst[j] = lst[j+1]
                lst[j+1] = tmp
    return lst
