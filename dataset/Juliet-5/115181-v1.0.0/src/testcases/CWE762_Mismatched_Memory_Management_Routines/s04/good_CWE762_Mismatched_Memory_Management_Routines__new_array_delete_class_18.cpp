namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    goto source;
source:
    data = new TwoIntsClass[100];
    goto sink;
sink:
    delete [] data;
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    goto source;
source:
    data = new TwoIntsClass;
    goto sink;
sink:
    delete data;
}
} 
