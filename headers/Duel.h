#ifndef DUEL_H
#define DUEL_H

#include <opencv2/opencv.hpp>
#include <windows.h>
#include <iostream>
#include <unordered_map>

class Duel {
public:
    bool startDuel();
    bool startRushDuel();
    bool startAutoDuel();
    bool skipDialogue();
    bool isDueling();
    bool isPlayerTurn();
    bool isDrawPhase();
    bool isBattlePhase();
    bool allAttacksPermormed();
    bool isPlayerTurnOne();
    bool clickBlank();
    bool draw();
    bool selectMonster();
    bool normalSummon();
    bool selectPosition();
    bool selectPhase();
    bool enterBattlePhase();
    bool selectMonsterToAttack();
    bool attack();
    bool dragAttack();
    bool selectOpponentMonsterToAttack();
    bool clickConfirmButton();
    bool endTurn();
    bool isOver();
};

#endif