namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = NULL;
        data = (TwoIntsClass *)realloc(data, 100*sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(8)
    {
    case 7:
        printLine("Benign, fixed string");
        break;
    default:
        free(data);
        break;
    }
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = NULL;
        data = (TwoIntsClass *)realloc(data, 100*sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        free(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN2()
{
    TwoIntsClass * data;
    data = NULL;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = new TwoIntsClass;
        break;
    }
    switch(7)
    {
    case 7:
        delete data;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = new TwoIntsClass;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        delete data;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
