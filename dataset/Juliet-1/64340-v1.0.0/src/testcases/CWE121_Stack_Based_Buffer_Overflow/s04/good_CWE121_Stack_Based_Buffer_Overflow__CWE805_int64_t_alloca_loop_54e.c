void FUN0(int64_t * data);
void FUN1()
{
    int64_t * data;
    int64_t * dataBadBuffer = (int64_t *)ALLOCA(50*sizeof(int64_t));
    int64_t * dataGoodBuffer = (int64_t *)ALLOCA(100*sizeof(int64_t));
    data = dataGoodBuffer;
    FUN0(data);
}
void FUN3(int64_t * data);
void FUN4(int64_t * data)
{
    FUN3(data);
}
void FUN4(int64_t * data);
void FUN6(int64_t * data)
{
    FUN4(data);
}
void FUN6(int64_t * data);
void FUN0(int64_t * data)
{
    FUN6(data);
}
void FUN3(int64_t * data)
{
    {
        int64_t source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printLongLongLine(data[0]);
        }
    }
}
