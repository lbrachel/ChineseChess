#ifndef _TEXT_H_
/**
* @brief 中国象棋文本处理函数声明
* 
* - 作者信息
*     - 作者：彭逸豪
*     - 班级：软件131班
*     - 学院：计算机科学与工程学院
*     - 学校：大连民族学院
*/
#define _TEXT_H_

/**********************************常量声明**********************************/

/** @brief 游戏存档目录 */
#define GAME_SAVE_DIR "./ChineseChess"

/**********************************函数声明**********************************/

/*取得棋子的记谱名称*/
void GetChessManualName(char chessType, char *ipName);

/*获取棋盘列名*/
void GetRowName(char row, char player, char *result);

/*将棋子走法转换成棋谱*/
char ChessMoveToManual(struct ChessBoard *cp, struct ChessPos sourPos, struct ChessPos destPos, char *result);

/*初始化游戏存档目录*/
int InitGameSaveDir();

/*取得默认存档名*/
void GetDefaultSaveName(char *name);

/*写游戏日志*/
int WriteGameLog(char *fileName, char *content);

/*保存游戏*/
int SaveGame(struct ChessBoard *cp, char *fileName);

/*加载游戏*/
int LoadGame(struct ChessBoard *cp, char *fileName);

/*文本匹配棋子*/
char TextMatchChess(char *text, char player);

/*解析数字*/
int ParseNumber(char *text, char player, int *len);

/*按棋谱走子*/
char MoveChessByMaunal(struct ChessBoard *cp, FILE *fp);

/*********************************预处理结束*********************************/
#endif