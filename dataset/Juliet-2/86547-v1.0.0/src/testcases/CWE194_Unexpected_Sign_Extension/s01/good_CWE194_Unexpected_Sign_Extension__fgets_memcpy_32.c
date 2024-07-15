void FUN0()
{
    short data;
    short *dataPtr1 = &data;
    short *dataPtr2 = &data;
    data = 0;
    {
        short data = *dataPtr1;
        data = 100-1;
        *dataPtr1 = data;
    }
    {
        short data = *dataPtr2;
        {
            char source[100];
            char dest[100] = "";
            memset(source, 'A', 100-1);
            source[100-1] = '\0';
            if (data < 100)
            {
                memcpy(dest, source, data);
                dest[data] = '\0'; 
            }
            printLine(dest);
        }
    }
}
