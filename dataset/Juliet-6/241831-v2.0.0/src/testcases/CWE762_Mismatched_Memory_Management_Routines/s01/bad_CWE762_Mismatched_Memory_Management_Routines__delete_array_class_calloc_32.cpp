namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    TwoIntsClass * *dataPtr1 = &data;
    TwoIntsClass * *dataPtr2 = &data;
    data = NULL;
    {
        TwoIntsClass * data = *dataPtr1;
        data = (TwoIntsClass *)calloc(100, sizeof(TwoIntsClass));
        if (data == NULL) {exit(-1);}
        *dataPtr1 = data;
    }
    {
        TwoIntsClass * data = *dataPtr2;
<START>
        delete [] data;
<END>
    }
}
} 
