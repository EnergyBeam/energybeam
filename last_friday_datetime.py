from datetime import datetime, timedelta


def get_last_friday(cur_date: str) -> str:
    dateobj = datetime.strptime(cur_date, '%m/%Y')
    next_month = dateobj.replace(day=28) + timedelta(days=4)
    res = next_month - timedelta(days=next_month.day)
    day_of_week = res.isoweekday()
    delta_time = None
    if day_of_week < 5:
        delta_time = day_of_week + 2
    elif day_of_week >= 5:
        delta_time = day_of_week - 5
    res = res - timedelta(delta_time)
    res = res.strftime('%d.%m.%Y')

    return res


if __name__ == '__main__':
    current_date = input("Введите дату ")
    print(get_last_friday(current_date))
