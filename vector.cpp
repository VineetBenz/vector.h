template<typename t>
class Vector
{
    public:
    Vector()
    {
        //alocate element
        ReAlloc(2);
    }
    void pushback(const T& value)
    {
        if(m_size >= m_capacity)
            ReAlloc(m_capacity+m_capacity/2);
        m_data[m_Size]= value;
        m_Size++;
    }
    size_t size() const (return m_Size);
    void ReAlloc(size_t newCapacity)
    {
        //1. allocate a new block of memory
        //2. copy/move old element into a new block 
        //3. delete
        t* newBlock = new T[newCapacity];
        if (newCapacity<m_Size)
            m_size = newCapacity
        for(size_t i = 0; i < m_size; i++)
        newBlock[i] = m_data[i];
        delete[] m_data;
        m_data = newBlock;
        m_capacity = newCapacity;
        
    }
    t* m_data = nullptr;
    size_t m_Size = 0;
    size_t m_capacity = 0;

}