import numpy as np

def search_delay(delays, project_list, project_matrix, projects):
    delay_list =[]
    for delay in delays:
        delay_id = project_list.index(delay)
        indexes = np.argwhere(project_matrix[delay_id] == 1)
        if len(indexes) == 0:
            continue
        for index in indexes:
            delay_list.append(projects[index[0]])
    return delay_list


def main():
    case_num = int(input())
    for t in range(case_num):
        K, J = map(int, input().split())
        projects = [list(input().split()) for _ in range(K)]
        delays = list(input().split())
        project_list = []
        for project in projects:
            project_list.extend(project)
        project_list = list(set(project_list))
        project_matrix = np.zeros((len(project_list), len(project_list)))
        for x, y in projects:
            x_id = project_list.index(x)
            y_id = project_list.index(y)
            project_matrix[y_id][x_id] = 1

        delay_set = {}
        for delay in delays:
            delay_set.add(delay)
            delay_id = project_list.index(delay)
            for index in np.argwhere(project_matrix[delay_id]==1):
                delay_set.add(projects[index[0]])
        print("Case #{}: {}".format(t + 1, " ".join(h_list)))


if __name__ == "__main__":
    main()
