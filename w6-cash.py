from cs50 import get_float
def main():
    bozuk = bozukluk("Kac lazim?: ")
    cents = dtc(bozuk)
    print(ctc(cents))
def bozukluk(prompt):
    while True:
        n = get_float(prompt)
        if n > 0:
            break
    return n
def dtc(tutar):
    c = round(tutar * 100)
    return c
def ctc(tutar):
    c = tutar // 25
    d = (tutar % 25) // 10
    n = ((tutar % 25) % 10) // 5
    p = ((tutar % 25) % 10) % 5
    return c + d + n + p
if __name__ == "__main__":
    main()