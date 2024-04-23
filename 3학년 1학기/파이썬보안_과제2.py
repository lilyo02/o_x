class Book :
    def __init__(self, title, author, company, pay, year) :
        self.title = title
        self.author = author
        self.company = company
        self.pay = pay
        self.year = year
        
def add_book(books) :
    input_data = input("추가할 도서정보를 입력하세요.\n")
    title, author, company, pay, year = input_data.split()
    book = Book(title, author, company, pay, year)
    books.append(book)
    print("\n도서가 추가되었습니다.\n")

def display_book(books) :
    if not books :
        print("등록된 도서가 없습니다.")
    else :
        for book in books :
            print("제목 : %s \n저자 : %s \n출판사 : %s \n가격 : %s\n" % (book.title, book.author, book.company, book.pay))

def find_book(books) :
    choice = input("검색키워드(도서명 : 1, 저자명 : 2, 출판사명 : 3, 출판연도 : 4) : ")
    if choice == '1' :
        find_title(books)
    elif choice == '2' :
        find_author(books)
    elif choice == '3' :
        find_company(books)
    elif choice == '4' :
        find_year(books)
    else :
        print("올바른 번호를 입력해주세요.")
        
def find_title(books) :
    if not books :
        print("등록된 도서가 없습니다.")
    else :
        title_to_find = input(" 제목   >>   ")
        found_books = [book for book in books if book.title == title_to_find]

        if found_books :
            for book in found_books :
                print("\n제목 : %s\n저자 : %s\n출판사 : %s\n가격 : %s\n" % (book.title, book.author, book.company, book.pay))
        else :
            print("해당 도서를 찾을 수 없습니다.")

def find_author(books) :
    if not books :
        print("등록된 도서가 없습니다.")
    else :
        author_to_find = input(" 저자명   >>   ")
        found_books = [book for book in books if book.author == author_to_find]

        if found_books :
            for book in found_books :
                print("\n제목 : %s\n저자 : %s\n출판사 : %s\n가격 : %s\n" % (book.title, book.author, book.company, book.pay))
        else :
            print("해당 도서를 찾을 수 없습니다.")

def find_company(books) :
    if not books :
        print("등록된 도서가 없습니다.")
    else :
        company_to_find = input(" 출판사명   >>   ")
        found_books = [book for book in books if book.company == company_to_find]

        if found_books :
            for book in found_books :
                print("\n제목 : %s\n저자 : %s\n출판사 : %s\n가격 : %s\n" % (book.title, book.author, book.company, book.pay))
        else :
            print("해당 도서를 찾을 수 없습니다.")

def find_year(books) : # 이거는 안됨 왠지 모르겟음
    if not books :
        print("등록된 도서가 없습니다.")
    else :
        title_to_find = input(" 출판연도   >>   ")
        found_books = [book for book in books if book.year == year_to_find]

        if found_books :
            for book in found_books :
                print("\n제목 : %s\n저자 : %s\n출판사 : %s\n가격 : %s\n" % (book.title, book.author, book.company, book.pay))
        else :
            print("해당 도서를 찾을 수 없습니다.")

def delete_book(books) :
    if not books :
        print("등록된 도서가 없습니다.")
    else :
        data = input("삭제할 도서명과 저자명을 입력하세요.\n")
        title_to_delete, author_to_delete = data.split()
        removed = False
        for book in books :
            if book.title == title_to_delete and book.author == author_to_delete :
                books.remove(book)
                removed = True
                print("도서가 삭제되었습니다.")
                display_book(books)
                break
        if not removed :
            print("도서를 찾을 수 없습니다")


books = []
while True :
    print("\n1. 도서 추가")
    print("2. 도서검색 \n  * 도서명 \n  * 저자명 \n  * 출판사명")
    print("3. 도서삭제")
    print("4. 종료\n")
    menu = input("선택(1, 2, 3, 4) : ")
    if menu == '1' :
        add_book(books)
        display_book(books)
    elif menu == '2' :
        find_book(books)
    elif menu == '3' :
        delete_book(books)
    elif menu == '4' :
        print("프로그램을 종료합니다.")
        break
    else :
        print("올바른 번호를 입력해주세요.")