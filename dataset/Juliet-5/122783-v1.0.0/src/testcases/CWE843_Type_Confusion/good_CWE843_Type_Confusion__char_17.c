void FUN0()
{
    int h;
    void * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        {
            int intBuffer = 8;
            data = &intBuffer;
        }
    }
    printIntLine(*((int*)data));
}
