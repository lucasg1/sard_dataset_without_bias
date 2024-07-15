namespace NAMESPACE0
{
class NAMESPACE0_FUN3
{
public:
    NAMESPACE0_FUN3(int dataCopy);
    ~NAMESPACE0_FUN3();
private:
    int data;
};
class NAMESPACE0_FUN4
{
public:
    NAMESPACE0_FUN4(int dataCopy);
    ~NAMESPACE0_FUN4();
private:
    int data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN3::NAMESPACE0_FUN3(int dataCopy)
{
    data = dataCopy;
    data = 2;
}
NAMESPACE0_FUN3::~NAMESPACE0_FUN3()
{
    {
        int result = data * data;
        printIntLine(result);
    }
}
}
namespace NAMESPACE0
{
void FUN3()
{
    int data;
    data = 0;
    NAMESPACE0_FUN3 * VAR3 = new NAMESPACE0_FUN3(data);
    delete VAR3;
}
void FUN4()
{
    int data;
    data = 0;
    NAMESPACE0_FUN4 * VAR4 = new NAMESPACE0_FUN4(data);
    delete VAR4;
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN4::NAMESPACE0_FUN4(int dataCopy)
{
    data = dataCopy;
    data = INT_MAX;
}
NAMESPACE0_FUN4::~NAMESPACE0_FUN4()
{
    if (abs((long)data) <= (long)sqrt((double)INT_MAX))
    {
        int result = data * data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
}
namespace NAMESPACE0
{
class NAMESPACE0_FUN3
{
public:
    NAMESPACE0_FUN3(int dataCopy);
    ~NAMESPACE0_FUN3();
private:
    int data;
};
class NAMESPACE0_FUN4
{
public:
    NAMESPACE0_FUN4(int dataCopy);
    ~NAMESPACE0_FUN4();
private:
    int data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN3::NAMESPACE0_FUN3(int dataCopy)
{
    data = dataCopy;
    data = 2;
}
NAMESPACE0_FUN3::~NAMESPACE0_FUN3()
{
    {
        int result = data * data;
        printIntLine(result);
    }
}
}
namespace NAMESPACE0
{
void FUN3()
{
    int data;
    data = 0;
    NAMESPACE0_FUN3 * VAR3 = new NAMESPACE0_FUN3(data);
    delete VAR3;
}
void FUN4()
{
    int data;
    data = 0;
    NAMESPACE0_FUN4 * VAR4 = new NAMESPACE0_FUN4(data);
    delete VAR4;
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN4::NAMESPACE0_FUN4(int dataCopy)
{
    data = dataCopy;
    data = INT_MAX;
}
NAMESPACE0_FUN4::~NAMESPACE0_FUN4()
{
    if (abs((long)data) <= (long)sqrt((double)INT_MAX))
    {
        int result = data * data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
}
