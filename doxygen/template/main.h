/*! @defgroup EXAMPLES 
 *  !author  林勇
 *  @version 1.0
 *  @date    2004-2005
 *  @{
 */


/** @name 文件名常量
 *  @{
 */

/** 日志文件名 */
#define LOG_FILENAME "d:\\log\\debug.log"
/** 数据文件名 */
#define DATA_FILENAME "d:\\data\\detail.dat"
/** 存档文件名 */
#define BAK_FILENAME "d:\\data\\backup.dat"

/** @}*/ // 文件名常量

/** @name 系统状态常量
 *  @{
 */
 
/** 正常状态 */
#define SYS_NORMAL 0
/** 故障状态 */
#define SYS_FAULT 1
/** 警告状态 */
#define SYS_WARNNING 2

/** @}*/ // 系统状态常量



/** 枚举常量 */
typedef enum TDayOfWeek
{
		SUN = 0, /**< 星期天 */
		MON = 1, /**< 星期一 */
		TUE = 2, /**< 星期二 */
		WED = 3, /**< 星期三 */
		THU = 4, /**< 星期四 */
		FRI = 5, /**< 星期五 */
		SAT = 6  /**< 星期六 */
}
/** 定义类型 TEnumDayOfWeek */
TEnumDayOfWeek;  
/** 定义类型 PEnumDayOfWeek */
typedef TEnumDayOfWeek* PEnumDayOfWeek; 

/** 定义枚举变量 enum1 */
TEnumDayOfWeek enum1;		
/** 定义枚举指针变量 enum2 */
PEnumDayOfWeek p_enum2; 



/** @defgroup FileUtils 文件操作函数
 *  @{
 */

/** 打开文件 \n
 *  文件打开成功后，必须使用 ::CloseFile 函数关闭。
 *  @param[in] file_name 文件名字符串
 *  @param[in] file_mode 文件打开模式字符串，可以由以下几个模块组合而成：
 *  - r 读取
 *  - w 可写
 *  - a 添加
 *  - t 文本模式(不能与 b 联用)
 *  - b 二进制模式(不能与 t 联用)
 *  @return 返回文件编号
 *  - -1 表示打开文件失败
 
 *  @note 文件打开成功后，必须使用 ::CloseFile 函数关闭
 *  @par 示例:
 *  @code
    // 用文本只读方式打开文件
    int f = OpenFile("d:\\test.txt", "rt");
 *  @endcode
 
 *  @see ::ReadFile ::WriteFile ::CloseFile
 *  @deprecated 由于特殊的原因，这个函数可能会在将来的版本中取消。
 */
int OpenFile(const char* file_name, const char* file_mode);

/** 读取文件 
 *  @param[in] file 文件编号，参见：::OpenFile
 *  @param[out] buffer 用于存放读取的文件内容
 *  @param[in] len 需要读取的文件长度
 *  @return 返回读取文件的长度
 *  - -1 表示读取文件失败
 
 *  @pre \e file 变量必须使用 ::OpenFile 返回值
 *  @pre \e buffer 不能为 NULL
 *  @see ::OpenFile ::WriteFile ::CloseFile
 */
int ReadFile(int file, char* buffer, int len);

/** 写入文件 
 *  @param[in] file 文件编号，参见：::OpenFile
 *  @param[in] buffer 用于存放将要写入的文件内容
 *  @param[in] len 需要写入的文件长度
 *  @return 返回写入的长度
 *  - -1 表示写入文件失败
 
 *  @pre \e file 变量必须使用 ::OpenFile 返回值
 *  @see ::OpenFile ::ReadFile ::CloseFile
 */
int WriteFile(int file, const char* buffer, int len);

/** 关闭文件 
 *  @param file 文件编号，参见：::OpenFile
 *  @retval 0  为成功
 *  @retval -1 表示失败
 
 *  @see ::OpenFile ::WriteFile ::ReadFile
 *  @deprecated 由于特殊的原因，这个函数可能会在将来的版本中取消。
 */
int CloseFile(int file);

/** @}*/ // 文件操作函数

/** @}*/ // 自动注释文档范例
