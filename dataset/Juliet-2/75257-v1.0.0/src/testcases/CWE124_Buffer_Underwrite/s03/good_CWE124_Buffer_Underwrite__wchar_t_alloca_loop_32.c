void FUN0()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wmemset(dataBuffer, L'A', 100-1);
    dataBuffer[100-1] = L'\0';
    {
        wchar_t * data = *dataPtr1;
        data = dataBuffer;
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        {
            size_t i;
            wchar_t source[100];
            wmemset(source, L'C', 100-1); 
            source[100-1] = L'\0'; 
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            data[100-1] = L'\0';
            printWLine(data);
        }
    }
}
