static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new twoIntsStruct[100];
    }
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete [] data;
    }
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new twoIntsStruct[100];
    }
    if(STATIC_CONST_FIVE==5)
    {
        delete [] data;
    }
}
void FUN2()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
    }
    if(STATIC_CONST_FIVE==5)
    {
        free(data);
    }
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
    }
    if(STATIC_CONST_FIVE==5)
    {
        free(data);
    }
}
} 
