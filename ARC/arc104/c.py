def main():
    N = int(input())
    A = []
    B = []
    for i in range(N):
        in_list = input().split(" ")
        A.append(int(in_list[0]))
        B.append(int(in_list[1]))
    print(N, A, B)

if __name__ == "__main__":
    main()