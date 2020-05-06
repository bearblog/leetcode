import math


def division(N, q):
    return math.floor(N / q)


def residual(M, q):
    if M % q == 0:
        return True
    else:
        return False


def count_pages():
    case_num = int(input())
    for t in range(case_num):
        total = 0
        N, M, Q = map(int, input().split(" "))
        torned_pages = list(map(int, input().split(" ")))
        reader_ids = map(int, input().split(" "))
        for q_id in reader_ids:
            read_num = division(N, q_id)
            torn_list = [residual(page, q_id) for page in torned_pages]
            torn_num = sum(torn_list)
            total += (read_num-torn_num)
        print("Case #{}: {}".format(t + 1, total))


if __name__ == "__main__":
    count_pages()
