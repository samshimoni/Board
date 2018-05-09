class IllegalCharException  {

public:
    IllegalCharException(const char c ) : c(c) { }

    const char theChar() const
    {
        return c;
    }

private:

    const char c;
};
