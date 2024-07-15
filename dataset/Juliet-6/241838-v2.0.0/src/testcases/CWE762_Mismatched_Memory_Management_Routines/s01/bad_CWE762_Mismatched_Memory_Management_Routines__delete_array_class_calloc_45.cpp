namespace NAMESPACE0
{
static TwoIntsClass * VAR1;
static TwoIntsClass * VAR2;
static TwoIntsClass * VAR3;
void FUN0()
{
    TwoIntsClass * data = VAR1;
<START>
    delete [] data;
<END>
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = (TwoIntsClass *)calloc(100, sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
    VAR1 = data;
    FUN0();
}
} 
