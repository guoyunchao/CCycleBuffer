//环形缓冲区头文件

#ifndef CCycleBuffer_H
#define CCycleBuffer_H
class CCycleBuffer
{

public:
	bool isFull();
	bool isEmpty();
	void empty();
	int getLength();
	CCycleBuffer(int size);
	virtual ~CCycleBuffer();
	int write(char* buf, int count);
	int read(char* buf, int count);
	int getStart()
	{
		return m_nReadPos;
	}
	int getEnd()
	{
		return m_nWritePos;
	}

private:
	bool m_bEmpty, m_bFull;
	char * m_pBuf;
	int m_nBufSize;
	int m_nReadPos;
	int m_nWritePos;
};
#endif // CCycleBuffer_H