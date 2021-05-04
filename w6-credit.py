import sys
def main():
    kartNo = kartNoAl()
    kontrolEt(kartNo)
def kartNoAl():
    while True:
        num = input("Kart No: ")
        try:
            if len(num) > 0 and int(num):
                break
        except ValueError:
            continue
    return num
def kontrolEt(cart):
    if len(cart) < 13 or 16 < len(cart):
        print("INVALID")
        sys.exit(0)
    cift, tek = 0, 0
    uzunluk = len(cart)
    if uzunluk % 2 == 0:
        for i in range(uzunluk):
            num = int(cart[i])
            if i % 2 == 0:
                katla = num * 2
                if katla >= 10:
                    cift += katla // 10
                    cift += katla % 10
                else:
                    cift += katla
            else:
                tek += num
    else:
        for i in range(uzunluk):
            num = int(cart[i])
            if i % 2 != 0:
                katla = num * 2
                if katla >= 10:
                    cift += katla // 10
                    cift += katla % 10
                else:
                    cift += katla
            else:
                tek += num
    csum = (cift + tek) % 10
    if csum == 0:
        first = int(cart[0])
        second = int(cart[1])
        if first == 3 and second == 4 or second == 7:
            print("AMEX")
        elif first == 5 and 1 <= second <= 5:
            print("MASTERCARD")
        elif first == 4:
            print("VISA")
        else:
            print("INVALID")
if __name__ == "__main__":
    main()