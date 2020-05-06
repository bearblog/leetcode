import math


def hIndex(citations) -> int:
    citations.sort(reverse=True)
    for i, citation in enumerate(citations):
        if citation > i:
            continue
        return i
    return i+1


def main():
    case_num = int(input())
    for t in range(case_num):
        paper_num = int(input())
        paper_cites = list(map(int, input().split(" ")))
        h_list = [hIndex(paper_cites[:i+1]) for i in range(len(paper_cites))]
        h_list = list(map(str, h_list))
        print("Case #{}: {}".format(t + 1, " ".join(h_list)))


if __name__ == "__main__":
    main()
