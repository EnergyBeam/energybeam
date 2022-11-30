import pandas as pd
from pandas import DataFrame


def count_sum(old_df: DataFrame) -> DataFrame:
    sorted_df = old_df.groupby('Товар').agg({'Количество': 'sum'})
    sorted_df['Количество'] = sorted_df['Количество'].astype(int)
    return sorted_df


if __name__ == '__main__':
    positions_count = int(input("Введите количество позиций: "))
    df = pd.DataFrame({'Дата': [],
                       'Товар': [],
                       'Количество': []})
    for i in range(positions_count):
        df.loc[i, 'Дата'] = pd.to_datetime(input("Введите дату "), dayfirst=True)
        df.loc[i, 'Товар'] = input("Введите название товара ")
        df.loc[i, 'Количество'] = int(input("Введите количество товара "))

    df = count_sum(df)
    print(df)
