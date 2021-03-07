#ifndef GLOBALCONTEXT_TYPE_H
#define GLOBALCONTEXT_TYPE_H

#include "ActorFunc.h"
#include "GameState.h"
#include "View.h"
#include "Camera.h"
#include "SoundContext.h"
#include "LightContext.h"
#include "PauseInfo.h"
#include "CollisionContext.h"
#include "ActorContext.h"
#include "CutsceneContext.h"
#include "SoundSource.h"
#include "SramContext.h"
#include "SkyboxContext.h"
#include "MessageContext.h"
#include "InterfaceContext.h"
#include "PauseContext.h"
#include "EnvironmentContext.h"
#include "AnimationContext.h"
#include "ObjectContext.h"
#include "RoomContext.h"
#include "TransitionActorContext.h"
#include "MtxF.h"
#include "CollisionCheckContext.h"
#include "PreRenderContext.h"
#include "TransitionContext.h"
#include "TransitionType.h" // For TransitionFade
#include <libultra/PR/gbi.h>

// TODO:FlexSkeletonHeader, move to proper files
typedef int32_t (*GenericFunc)(struct GlobalContext* globalCtx);
typedef int32_t (*PlayerFunc)(struct GlobalContext* globalCtx, struct Player* player);
typedef void (*PlayerFunc2)(struct Player* player, struct GlobalContext* globalCtx);
typedef void (*PlayerInitFunc)(struct Player* player, struct GlobalContext* globalCtx, struct FlexSkeletonHeader* skelHeader);
typedef void (*PlayerUpdateFunc)(struct Player* player, struct GlobalContext* globalCtx, struct Input* input);
typedef int32_t (*StartPlayerCutsceneFunc)(struct GlobalContext* globalCtx, struct Actor* actor, int32_t mode);
typedef int32_t (*DamagePlayerFunc)(struct GlobalContext* globalCtx, int32_t damage);

typedef struct GlobalContext {
    /* 0x00000 */ GameState game;
    /* 0x000A4 */ int16_t sceneNum;
    /* 0x000A6 */ uint8_t sceneConfig;
    /* 0x000A7 */ uint8_t _pad0;
    /* 0x000A8 */ char* keepSegment;
    /* 0x000AC */ char* exchange_keepSegment;
    /* 0x000B0 */ char* sceneSegment;
    /* 0x000B4 */ int32_t _pad1;
    /* 0x000B8 */ View view;
    /* 0x001E0 */ Camera mainCamera;
    /* 0x0034C */ Camera subCameras[3];
    /* 0x00790 */ struct Camera* cameraPtrs[4];
    /* 0x007A0 */ int16_t activeCamera;
    /* 0x007A2 */ int16_t nextCamera;
    /* 0x007A4 */ SoundContext soundCtx;
    /* 0x007A8 */ LightContext lightCtx;
    /* 0x007B8 */ PauseInfo pauseInfo;
    /* 0x007C0 */ CollisionContext colCtx;
    /* 0x01C24 */ ActorContext actorCtx;
    /* 0x01D64 */ CutsceneContext csCtx;
    /* 0x01DB4 */ SoundSource soundSources[16];
    /* 0x01F74 */ SramContext sramCtx;
    /* 0x01F78 */ SkyboxContext skyboxCtx;
    /* 0x020D8 */ MessageContext msgCtx; // "message"
    /* 0x104F0 */ InterfaceContext interfaceCtx; // "parameter"
    /* 0x10760 */ PauseContext pauseCtx;
    /* 0x10A20 */ uint16_t gover;
    /* 0x10A24 */ EnvironmentContext envCtx;
    /* 0x10B20 */ AnimationContext animationCtx;
    /* 0x117A4 */ ObjectContext objectCtx;
    /* 0x11CBC */ RoomContext roomCtx;
    /* 0x11D30 */ int _pad2; // Is this real??
    /* 0x11D34 */ TransitionActorContext transitionActorCtx;
    /* 0x11D3C */ PlayerInitFunc playerInit;
    /* 0x11D40 */ PlayerUpdateFunc playerUpdate;
    /* 0x11D44 */ GenericFunc isPlayerDroppingFish;
    /* 0x11D48 */ GenericFunc startPlayerFishing;
    /* 0x11D4C */ PlayerFunc grabPlayer;
    /* 0x11D50 */ StartPlayerCutsceneFunc startPlayerCutscene;
    /* 0x11D54 */ PlayerFunc2 func_11D54;
    /* 0x11D58 */ DamagePlayerFunc damagePlayer;
    /* 0x11D5C */ ActorFunc talkWithPlayer;
    /* 0x11D60 */ MtxF projectionMatrix;
    /* 0x11DA0 */ MtxF softspriteMatrix;
    /* 0x11DE0 */ Mtx* softspriteMtxp;
    /* 0x11DE4 */ uint32_t gameplayFrames;
    /* 0x11DE8 */ uint8_t linkAgeOnLoad;
    /* 0x11DE9 */ uint8_t actorStopFlag;
    /* 0x11DEA */ uint8_t curSpawn;
    /* 0x11DEB */ uint8_t nbSetupActors;
    /* 0x11DEC */ uint8_t nbRooms; // Member of addition substruct "Room_Rom_Address" in source which includes RomFile*
    /* 0x11DF0 */ struct RomFile* roomList;
    /* 0x11DF4 */ struct ActorEntry* linkActorEntry;
    /* 0x11DF8 */ struct ActorEntry* setupActorList;
    /* 0x11DFC */ struct CameraData* cameraData;
    /* 0x11E00 */ struct EntranceEntry* setupEntranceList;
    /* 0x11E04 */ int16_t* setupExitList;
    /* 0x11E08 */ struct Path* setupPathList;
    /* 0x11E0C */ struct ElfMessage* cUpElfMsgs;
    /* 0x11E10 */ void* specialEffect;
    /* 0x11E14 */ uint8_t skyboxId;
    /* 0x11E15 */ int8_t sceneLoadFlag; // "fade_direction"
    /* 0x11E16 */ int16_t fadeCounter;
    /* 0x11E18 */ int16_t bgFadeCounter;
    /* 0x11E1A */ int16_t nextEntranceIndex;
    /* 0x11E1C */ MtxF dynamicCheckMatrix;
    /* 0x11E5C */ int8_t shootingGalleryStatus;
    /* 0x11E5D */ int8_t bombchuBowlingStatus; // "bombchu_game_flag"
    /* 0x11E5E */ uint8_t fadeTransition;
    /* 0x11E60 */ CollisionCheckContext colChkCtx;
    /* 0x120FC */ uint16_t envFlags[20];
    /* 0x12124 */ PreRenderContext preRenderCtx;
    /* 0x12174 */ PreRenderContext preRender7kPolygon;
    /* 0x121C4 */ uint8_t _pad3[3];
    /* 0x121C7 */ uint8_t zBufferMode; // 0 = none, 1 = zbuffer, 2 = prerender
    /* 0x121C8 */ TransitionContext transitionCtx;
    /* 0x12418 */ uint8_t _pad4[3];
    /* 0x1241B */ uint8_t transitionMode; // "fbdemo_wipe_modem"
    /* 0x1241C */ TransitionFade transitionFade;
    /* 0x12428 */ uint8_t _pad5[3];
    /* 0x1242B */ uint8_t prerenderSkyboxSwitch;
    /* 0x1242C */ struct Scene* loadedScene;
    /* 0x12430 */ uint8_t _pad6[0xE8];
} GlobalContext; /* sizeof = 0x12518 */

#endif

