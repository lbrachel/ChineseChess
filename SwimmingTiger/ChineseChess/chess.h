#ifndef _CHESS_H_
/**
* @brief 中国象棋棋子棋盘定义与走棋函数声明
* 
* - 作者信息
*     - 作者：彭逸豪
*     - 班级：软件131班
*     - 学院：计算机科学与工程学院
*     - 学校：大连民族学院
*/
#define _CHESS_H_

/********************************数据类型声明********************************/

/**
* @brief 玩家枚举
* 
* 用来标识玩家是红方还是黑方。
* 象棋规则中红方先手，黑方后手。
*/
enum Player
{
    PLY_BOTH, ///< 红方玩家和黑方玩家在同一台电脑上，两者交替操作
    PLY_RED, ///< 当前为红方玩家
    PLY_BLACK, ///< 当前为黑方玩家
};

/**
* @brief 棋子类型枚举
* 
* 枚举了红黑方的所有棋子类型，包括无棋子。
* 其中，红方名称中间带_R_，黑方带_K_
* （因R和B过于相似，故不用B而用K代表黑方Black）
*/
enum ChessType
{
    CHESS_NULL, ///< 无棋子
    
    CHESS_R_SHUAI, ///< 红方帅
    CHESS_R_JU, ///< 红方车
    CHESS_R_MA, ///< 红方马
    CHESS_R_PAO, ///< 红方炮
    CHESS_R_XIANG, ///< 红方相
    CHESS_R_SHI, ///< 红方仕
    CHESS_R_BING, ///< 红方兵
    
    CHESS_K_JIANG, ///< 黑方将
    CHESS_K_JU, ///< 黑方车
    CHESS_K_MA, ///< 黑方马
    CHESS_K_PAO, ///< 黑方炮
    CHESS_K_XIANG, ///< 黑方象
    CHESS_K_SHI, ///< 黑方士
    CHESS_K_ZU, ///< 黑方卒
};

/**
* @brief 棋盘结构
* 
* 包括棋盘格子数据、红黑方的位置
*/
typedef struct ChessBoard
{
    char map[10][9]; ///< 棋盘格子数据，
                     ///< 一个十行九列的二维数组，前五行为黑方棋盘，后五行为红方棋盘。
                     ///< （当前玩家是黑方时，虽将黑方绘制在下，但黑方棋盘数据仍在前五行。）
                     ///< 每个数组元素代表棋盘上的一个交叉点，其值为棋子类型枚举值。
    char player; ///< 当前玩家，其值为玩家枚举类型，用于联网对战标识玩家，当前无效。
} ChessBoard;

/**********************************函数声明**********************************/

/*初始化棋盘*/
void InitChessBoard(ChessBoard *cp, enum Player player);

/*预处理结束*/
#endif