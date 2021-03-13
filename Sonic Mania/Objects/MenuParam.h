#ifndef OBJ_MENUPARAM_H
#define OBJ_MENUPARAM_H

#include "../SonicMania.h"

// Object Class
typedef struct {
	RSDK_OBJECT
} ObjectMenuParam;

// Entity Class
typedef struct {
	RSDK_ENTITY
} EntityMenuParam;

// Object Struct
extern ObjectMenuParam *MenuParam;

// Standard Entity Events
void MenuParam_Update();
void MenuParam_LateUpdate();
void MenuParam_StaticUpdate();
void MenuParam_Draw();
void MenuParam_Create(void* data);
void MenuParam_StageLoad();
void MenuParam_EditorDraw();
void MenuParam_EditorLoad();
void MenuParam_Serialize();

// Extra Entity Functions


#endif //!OBJ_MENUPARAM_H