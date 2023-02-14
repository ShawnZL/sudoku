//
// Created by Shawn Zhao on 2023/2/14.
//

#ifndef SUDOKU_SUDOKU_H
#define SUDOKU_SUDOKU_H
class sudoku{
public:
    sudoku(); //读取文件，初始化数组
    void printsudo(); // 打印数组
    int solve(); // 求解
    void outputsudoku(); // 输出解文件
    int checksudoku(); // 检查数组是否正确

private:
    int search(); // 搜索求解
    int checkclear(); // 返回未填写的格子数
    void base_solve(); // 摒弃求解
    void clear_solv_sudoku(int, int, int);//删除不可能的候选数
    void update_ques_sudoku();//填写唯一候选数到数独
    int ques_sudoku[9][9];//数独
    int solv_sudoku[9][9][9];//候选数
};
#endif //SUDOKU_SUDOKU_H
