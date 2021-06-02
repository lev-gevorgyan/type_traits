template<typename T>
struct is_void
{
    static const bool value{false};
};

template<>
struct is_void<void>
{
    static const bool value{true};
};