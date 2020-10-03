
def main():
    in_list = input().split(" ")
    A = int(in_list[0])
    B = int(in_list[1])
    X = int((A+B)/2)
    Y = int((A-B)/2)
    print(X, Y)


if __name__ == "__main__":
    main()