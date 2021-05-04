from cs50 import get_int
def main():
    hei = yukseklik("Yukseklik: ")
    piramit(hei)
def yukseklik(prompt):
    while True:
        h = get_int(prompt)
        if h > 0 and h < 9:
            break
    return h
def piramit(r):
    for row in range(1, r + 1):
        print(" " * (r - row) + "#" * row, end="")
        print("  ", end="")
        print("#" * row)
if __name__ == "__main__":
    main()