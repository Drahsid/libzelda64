#ifndef __PUPPET_EQUIP_HAMMER_H__
#define __PUPPET_EQUIP_HAMMER_H__

#include <libzelda64.h>

void draw_hammer(GlobalContext* globalCtx, En_Puppet* this, Vec3f* pos, Vec3s* rot) {
    
    Matrix_Push();
    {
        Matrix_Translate(pos->x, pos->y, pos->z, 1);
        Matrix_RotateRPY(rot->x, rot->y, rot->z, 1);

        gSPMatrix(POLY_OPA_DISP++, Matrix_NewMtx(globalCtx->game.gfxCtx), G_MTX_LOAD);

        gSPDisplayList(POLY_OPA_DISP++, baseToPointer(this, DL_HAMMER));
    }
    Matrix_Pop();
}

#endif /* __PUPPET_EQUIP_HAMMER_H__ */