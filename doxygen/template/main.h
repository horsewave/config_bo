/*! @defgroup EXAMPLES 
 *  !author  ����
 *  @version 1.0
 *  @date    2004-2005
 *  @{
 */


/** @name �ļ�������
 *  @{
 */

/** ��־�ļ��� */
#define LOG_FILENAME "d:\\log\\debug.log"
/** �����ļ��� */
#define DATA_FILENAME "d:\\data\\detail.dat"
/** �浵�ļ��� */
#define BAK_FILENAME "d:\\data\\backup.dat"

/** @}*/ // �ļ�������

/** @name ϵͳ״̬����
 *  @{
 */
 
/** ����״̬ */
#define SYS_NORMAL 0
/** ����״̬ */
#define SYS_FAULT 1
/** ����״̬ */
#define SYS_WARNNING 2

/** @}*/ // ϵͳ״̬����



/** ö�ٳ��� */
typedef enum TDayOfWeek
{
		SUN = 0, /**< ������ */
		MON = 1, /**< ����һ */
		TUE = 2, /**< ���ڶ� */
		WED = 3, /**< ������ */
		THU = 4, /**< ������ */
		FRI = 5, /**< ������ */
		SAT = 6  /**< ������ */
}
/** �������� TEnumDayOfWeek */
TEnumDayOfWeek;  
/** �������� PEnumDayOfWeek */
typedef TEnumDayOfWeek* PEnumDayOfWeek; 

/** ����ö�ٱ��� enum1 */
TEnumDayOfWeek enum1;		
/** ����ö��ָ����� enum2 */
PEnumDayOfWeek p_enum2; 



/** @defgroup FileUtils �ļ���������
 *  @{
 */

/** ���ļ� \n
 *  �ļ��򿪳ɹ��󣬱���ʹ�� ::CloseFile �����رա�
 *  @param[in] file_name �ļ����ַ���
 *  @param[in] file_mode �ļ���ģʽ�ַ��������������¼���ģ����϶��ɣ�
 *  - r ��ȡ
 *  - w ��д
 *  - a ���
 *  - t �ı�ģʽ(������ b ����)
 *  - b ������ģʽ(������ t ����)
 *  @return �����ļ����
 *  - -1 ��ʾ���ļ�ʧ��
 
 *  @note �ļ��򿪳ɹ��󣬱���ʹ�� ::CloseFile �����ر�
 *  @par ʾ��:
 *  @code
    // ���ı�ֻ����ʽ���ļ�
    int f = OpenFile("d:\\test.txt", "rt");
 *  @endcode
 
 *  @see ::ReadFile ::WriteFile ::CloseFile
 *  @deprecated ���������ԭ������������ܻ��ڽ����İ汾��ȡ����
 */
int OpenFile(const char* file_name, const char* file_mode);

/** ��ȡ�ļ� 
 *  @param[in] file �ļ���ţ��μ���::OpenFile
 *  @param[out] buffer ���ڴ�Ŷ�ȡ���ļ�����
 *  @param[in] len ��Ҫ��ȡ���ļ�����
 *  @return ���ض�ȡ�ļ��ĳ���
 *  - -1 ��ʾ��ȡ�ļ�ʧ��
 
 *  @pre \e file ��������ʹ�� ::OpenFile ����ֵ
 *  @pre \e buffer ����Ϊ NULL
 *  @see ::OpenFile ::WriteFile ::CloseFile
 */
int ReadFile(int file, char* buffer, int len);

/** д���ļ� 
 *  @param[in] file �ļ���ţ��μ���::OpenFile
 *  @param[in] buffer ���ڴ�Ž�Ҫд����ļ�����
 *  @param[in] len ��Ҫд����ļ�����
 *  @return ����д��ĳ���
 *  - -1 ��ʾд���ļ�ʧ��
 
 *  @pre \e file ��������ʹ�� ::OpenFile ����ֵ
 *  @see ::OpenFile ::ReadFile ::CloseFile
 */
int WriteFile(int file, const char* buffer, int len);

/** �ر��ļ� 
 *  @param file �ļ���ţ��μ���::OpenFile
 *  @retval 0  Ϊ�ɹ�
 *  @retval -1 ��ʾʧ��
 
 *  @see ::OpenFile ::WriteFile ::ReadFile
 *  @deprecated ���������ԭ������������ܻ��ڽ����İ汾��ȡ����
 */
int CloseFile(int file);

/** @}*/ // �ļ���������

/** @}*/ // �Զ�ע���ĵ�����
