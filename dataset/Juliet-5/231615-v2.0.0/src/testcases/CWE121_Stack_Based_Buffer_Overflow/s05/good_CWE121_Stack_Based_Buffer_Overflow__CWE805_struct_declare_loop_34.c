typedef union
{
    twoIntsStruct * unionFirst;
    twoIntsStruct * unionSecond;
} CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_34_unionType;
void FUN0()
{
    twoIntsStruct * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_struct_declare_loop_34_unionType myUnion;
    twoIntsStruct dataBadBuffer[50];
    twoIntsStruct dataGoodBuffer[100];
    data = dataGoodBuffer;
    myUnion.unionFirst = data;
    {
        twoIntsStruct * data = myUnion.unionSecond;
        {
            twoIntsStruct source[100];
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
                    source[i].intOne = 0;
                    source[i].intTwo = 0;
                }
            }
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
                    data[i] = source[i];
                }
                printStructLine(&data[0]);
            }
        }
    }
}
