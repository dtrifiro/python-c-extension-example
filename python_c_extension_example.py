import extension


def main():
    print(f"This is the {extension=}")

    print("The following output comes from the C extension")

    result = extension.example_method("world")
    print(f"{result=}")


if __name__ == "__main__":
    main()
