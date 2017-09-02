import sys

def bsort(*args):
    lst = list(args)
    for i in range(len(lst)-1, 0, -1):
        for j in range(0, i):
            print(lst)
            if lst[j] > lst[j+1]:
                tmp = lst[j]
                lst[j] = lst[j+1]
                lst[j+1] = tmp
    return lst

def fdsort(*args):
    lst = list(args)
    for i in range(len(lst)-1, 0, -1):
        for j in range(0, i):
            print(lst)
            if lst[j]%9 > lst[j+1]%9:
                tmp = lst[j]
                lst[j] = lst[j+1]
                lst[j+1] = tmp



def main():
    list = fdsort(79, 82, 34, 83, 69, 420, 34, 19, 71, 341, 17, 32, 91, 7,46)

    # print(list)

# account for the main() implementation
if __name__ == "__main__":
    main()
