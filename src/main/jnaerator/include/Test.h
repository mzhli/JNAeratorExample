#define ARRAY_COUNT 10
#define EXPRESSION  (1 << 10) | (1 << 5)

enum EOrder 
{
    First,  // first comments
    Second, // comments on second
    Last    // not a real value
};

struct TestStruct 
{
    EOrder eOrder;
    bool (*hook)(int val);
    long longValue;
    int intArray[ARRAY_COUNT];
};

// A Test function
void Test(TestStruct& s);