void FUN0()
{
    while(1)
    {
<START>
        if (RpcImpersonateClient(0) == RPC_S_OK)
<END>
        {
            exit(1);
        }
        break;
    }
}
