static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int * data;
    int dataUninitArray[10];
    data = dataUninitArray;
    if(STATIC_CONST_FIVE==5)
    {
        ; 
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
<START>
                printIntLine(data[i]);
<END>
            }
        }
    }
}
