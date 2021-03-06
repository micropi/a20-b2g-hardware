/*
 * Copyright 2012 Samsung Electronics S.LSI Co. LTD
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * @file        Exynos_OSAL_Android.h
 * @brief
 * @author      Seungbeom Kim (sbcrux.kim@samsung.com)
 * @author      Hyeyeon Chung (hyeon.chung@samsung.com)
 * @author      Yunji Kim (yunji.kim@samsung.com)
 * @author      Jinsung Yang (jsgood.yang@samsung.com)
 * @version     2.0.0
 * @history
 *   2012.02.20 : Create
 */

#ifndef Exynos_OSAL_ANDROID
#define Exynos_OSAL_ANDROID

#include "OMX_Types.h"
#include "OMX_Core.h"
#include "OMX_Index.h"

#ifdef __cplusplus
extern "C" {
#endif

OMX_ERRORTYPE Exynos_OSAL_GetANBParameter(OMX_IN OMX_HANDLETYPE hComponent,
                                          OMX_IN OMX_INDEXTYPE nIndex,
                                          OMX_INOUT OMX_PTR ComponentParameterStructure);

OMX_ERRORTYPE Exynos_OSAL_SetANBParameter(OMX_IN OMX_HANDLETYPE hComponent,
                                          OMX_IN OMX_INDEXTYPE nIndex,
                                          OMX_IN OMX_PTR ComponentParameterStructure);

OMX_ERRORTYPE Exynos_OSAL_LockANB(OMX_IN OMX_PTR pBuffer,
                                  OMX_IN OMX_U32 width,
                                  OMX_IN OMX_U32 height,
                                  OMX_IN OMX_COLOR_FORMATTYPE format,
                                  OMX_OUT OMX_U32 *pStride,
                                  OMX_OUT OMX_PTR planes);

OMX_ERRORTYPE Exynos_OSAL_UnlockANB(OMX_IN OMX_PTR pBuffer);

OMX_ERRORTYPE Exynos_OSAL_LockANBHandle(OMX_IN OMX_U32 pBuffer,
                                        OMX_IN OMX_U32 width,
                                        OMX_IN OMX_U32 height,
                                        OMX_IN OMX_COLOR_FORMATTYPE format,
                                        OMX_OUT OMX_PTR planes);

OMX_ERRORTYPE Exynos_OSAL_UnlockANBHandle(OMX_IN OMX_U32 pBuffer);

OMX_ERRORTYPE Exynos_OSAL_GetInfoFromMetaData(OMX_IN OMX_BYTE pBuffer,
                                              OMX_OUT OMX_PTR *pOutBuffer);

OMX_ERRORTYPE Exynos_OSAL_CheckANB(OMX_IN EXYNOS_OMX_DATA *pBuffer,
                                   OMX_OUT OMX_BOOL *bIsANBEnabled);

OMX_COLOR_FORMATTYPE Exynos_OSAL_Hal2OMXPixelFormat(unsigned int hal_format);

unsigned int Exynos_OSAL_OMX2HalPixelFormat(OMX_COLOR_FORMATTYPE omx_format);

#ifdef __cplusplus
}
#endif

#endif
