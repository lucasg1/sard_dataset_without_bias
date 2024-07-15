static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
    }
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        free(data);
    }
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
    }
    if(staticFive==5)
    {
        free(data);
    }
}
void FUN2()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new twoIntsStruct;
    }
    if(staticFive==5)
    {
        delete data;
    }
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new twoIntsStruct;
    }
    if(staticFive==5)
    {
        delete data;
    }
}
} 
