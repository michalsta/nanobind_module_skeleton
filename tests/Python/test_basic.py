from XXXXXX import greet, hello_msg

def test_hello_msg():
    assert hello_msg() == "Hello from XXXXXX C++!"

def test_greet():
    greet()  # Just ensure it runs without error

if __name__ == "__main__":
    test_hello_msg()
    test_greet()