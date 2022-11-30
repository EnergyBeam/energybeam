dict_split = {'<': lambda x, y: x < y,
              '>': lambda x, y: x > y}


def compare(condition_string: str):
    compare_result = 'Ошибка'
    for key in dict_split:
        if key in condition_string:
            a = condition_string.split(key)
            compare_result = dict_split[key](int(a[0]), int(a[1]))
    return compare_result


if __name__ == '__main__':
    input_string = input("Введите неравенство ")
    print(compare(input_string))
