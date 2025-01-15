#pragma once

#include "CSD/Manager/csdmBase.h"
#include "CSD/Manager/csdmMotionPattern.h"
#include "CSD/Manager/csdmNode.h"
#include "CSD/Manager/csdmNodeObserver.h"
#include "CSD/Manager/csdmObserverBase.h"
#include "CSD/Manager/csdmProject.h"
#include "CSD/Manager/csdmRCObject.h"
#include "CSD/Manager/csdmRCObjectImp.h"
#include "CSD/Manager/csdmRCPtr.h"
#include "CSD/Manager/csdmRCPtrAbs.h"
#include "CSD/Manager/csdmResourceBase.h"
#include "CSD/Manager/csdmScene.h"
#include "CSD/Manager/csdmSceneObserver.h"
#include "CSD/Manager/csdmSubjectBase.h"
#include "CSD/Platform/csdTexList.h"
#include "Hedgehog/Base/Container/hhMap.h"
#include "Hedgehog/Base/Container/hhVector.h"
#include "Hedgehog/Base/System/hhAllocator.h"
#include "Hedgehog/Base/System/hhSymbol.h"
#include "Hedgehog/Base/Thread/hhHolder.h"
#include "Hedgehog/Base/Thread/hhHolderBase.h"
#include "Hedgehog/Base/Thread/hhSynchronizedObject.h"
#include "Hedgehog/Base/Thread/hhSynchronizedPtr.h"
#include "Hedgehog/Base/Type/detail/hhStringHolder.h"
#include "Hedgehog/Base/Type/hhSharedString.h"
#include "Hedgehog/Base/hhObject.h"
#include "Hedgehog/Database/System/hhDatabaseData.h"
#include "Hedgehog/Math/Aabb.h"
#include "Hedgehog/Math/Matrix.h"
#include "Hedgehog/Math/Quaternion.h"
#include "Hedgehog/Math/Vector.h"
#include "Hedgehog/MirageCore/Camera/hhCamera.h"
#include "Hedgehog/MirageCore/Misc/hhVertexDeclarationPtr.h"
#include "Hedgehog/MirageCore/RenderData/hhMaterialData.h"
#include "Hedgehog/MirageCore/RenderData/hhMeshData.h"
#include "Hedgehog/MirageCore/RenderData/hhMeshIndexData.h"
#include "Hedgehog/MirageCore/RenderData/hhModelData.h"
#include "Hedgehog/MirageCore/RenderData/hhMorphModelData.h"
#include "Hedgehog/MirageCore/RenderData/hhNodeGroupModelData.h"
#include "Hedgehog/MirageCore/RenderData/hhPixelShaderCodeData.h"
#include "Hedgehog/MirageCore/RenderData/hhPixelShaderData.h"
#include "Hedgehog/MirageCore/RenderData/hhShaderListData.h"
#include "Hedgehog/MirageCore/RenderData/hhTerrainModelData.h"
#include "Hedgehog/MirageCore/RenderData/hhTexsetData.h"
#include "Hedgehog/MirageCore/RenderData/hhTextureData.h"
#include "Hedgehog/MirageCore/RenderData/hhVertexShaderCodeData.h"
#include "Hedgehog/MirageCore/RenderData/hhVertexShaderData.h"
#include "Hedgehog/MirageCore/Renderable/hhRenderable.h"
#include "Hedgehog/Sparkle/hhParticleMaterial.h"
#include "Hedgehog/Universe/Engine/hhMessageActor.h"
#include "Hedgehog/Universe/Engine/hhMessageProcess.h"
#include "Hedgehog/Universe/Engine/hhUpdateInfo.h"
#include "Hedgehog/Universe/Engine/hhUpdateUnit.h"
#include "Hedgehog/Universe/Thread/hhParallelJob.h"
#include "SWA/Achievement/AchievementManager.h"
#include "SWA/Achievement/AchievementTest.h"
#include "SWA/CSD/CsdDatabaseWrapper.h"
#include "SWA/CSD/CsdProject.h"
#include "SWA/CSD/CsdTexListMirage.h"
#include "SWA/CSD/GameObjectCSD.h"
#include "SWA/Camera/Camera.h"
#include "SWA/Globals.h"
#include "SWA/HUD/GeneralWindow/GeneralWindow.h"
#include "SWA/HUD/Loading/Loading.h"
#include "SWA/HUD/Pause/HudPause.h"
#include "SWA/HUD/SaveIcon/SaveIcon.h"
#include "SWA/HUD/Sonic/HudSonicStage.h"
#include "SWA/Inspire/InspireMovieOverlay.h"
#include "SWA/Inspire/InspireMovieOverlayInfo.h"
#include "SWA/Inspire/InspireOpacityAnimationInfo.h"
#include "SWA/Inspire/InspireScene.h"
#include "SWA/Inspire/InspireSceneData.h"
#include "SWA/Inspire/InspireSceneInfo.h"
#include "SWA/Inspire/InspireTextureAnimationInfo.h"
#include "SWA/Inspire/InspireTextureOverlay.h"
#include "SWA/Inspire/InspireTextureOverlayInfo.h"
#include "SWA/Movie/MovieDisplayer.h"
#include "SWA/Movie/MovieManager.h"
#include "SWA/Player/Character/EvilSonic/EvilSonic.h"
#include "SWA/Player/Character/EvilSonic/EvilSonicContext.h"
#include "SWA/Player/Character/EvilSonic/Hud/EvilHudGuide.h"
#include "SWA/Sequence/Unit/SequenceUnitBase.h"
#include "SWA/Sequence/Unit/SequenceUnitPlayMovie.h"
#include "SWA/Sequence/Utility/SequencePlayMovieWrapper.h"
#include "SWA/Sound/Sound.h"
#include "SWA/Sound/SoundBGMActSonic.h"
#include "SWA/Sound/SoundBGMBase.h"
#include "SWA/System/Application.h"
#include "SWA/System/ApplicationD3D9.h"
#include "SWA/System/ApplicationDocument.h"
#include "SWA/System/ApplicationXenon.h"
#include "SWA/System/Game.h"
#include "SWA/System/GameDocument.h"
#include "SWA/System/GameMode/GameMode.h"
#include "SWA/System/GameMode/GameModeStage.h"
#include "SWA/System/GameMode/GameModeStageMovie.h"
#include "SWA/System/GameMode/Title/TitleMenu.h"
#include "SWA/System/GameMode/Title/TitleStateBase.h"
#include "SWA/System/GameObject.h"
#include "SWA/System/GameParameter.h"
#include "SWA/System/GammaController.h"
#include "SWA/System/InputState.h"
#include "SWA/System/PadState.h"
#include "SWA/System/StageManager.h"
#include "SWA/System/World.h"
#include "boost/smart_ptr/make_shared_object.h"
#include "boost/smart_ptr/shared_ptr.h"
