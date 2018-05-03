/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/gamelift/model/FleetStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/ProtectionPolicy.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>General properties describing a fleet.</p>
   */
  class AWS_GAMELIFT_API FleetAttributes
  {
  public:
    FleetAttributes();
    FleetAttributes(const Aws::Utils::Json::JsonValue& jsonValue);
    FleetAttributes& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline FleetAttributes& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline FleetAttributes& WithFleetId(Aws::String&& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet.</p>
     */
    inline FleetAttributes& WithFleetId(const char* value) { SetFleetId(value); return *this;}

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline FleetAttributes& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline FleetAttributes& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>Human-readable description of the fleet.</p>
     */
    inline FleetAttributes& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>Descriptive label associated with a fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Descriptive label associated with a fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label associated with a fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label associated with a fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Descriptive label associated with a fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline FleetAttributes& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label associated with a fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline FleetAttributes& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label associated with a fleet. Fleet names do not need to be
     * unique.</p>
     */
    inline FleetAttributes& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Time stamp indicating when this object was created. Format is an integer
     * representing the number of seconds since the Unix epoch (Unix time).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>Time stamp indicating when this object was created. Format is an integer
     * representing the number of seconds since the Unix epoch (Unix time).</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>Time stamp indicating when this object was created. Format is an integer
     * representing the number of seconds since the Unix epoch (Unix time).</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>Time stamp indicating when this object was created. Format is an integer
     * representing the number of seconds since the Unix epoch (Unix time).</p>
     */
    inline FleetAttributes& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this object was created. Format is an integer
     * representing the number of seconds since the Unix epoch (Unix time).</p>
     */
    inline FleetAttributes& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this fleet was terminated. Format is an integer
     * representing the number of seconds since the Unix epoch (Unix time).</p>
     */
    inline const Aws::Utils::DateTime& GetTerminationTime() const{ return m_terminationTime; }

    /**
     * <p>Time stamp indicating when this fleet was terminated. Format is an integer
     * representing the number of seconds since the Unix epoch (Unix time).</p>
     */
    inline void SetTerminationTime(const Aws::Utils::DateTime& value) { m_terminationTimeHasBeenSet = true; m_terminationTime = value; }

    /**
     * <p>Time stamp indicating when this fleet was terminated. Format is an integer
     * representing the number of seconds since the Unix epoch (Unix time).</p>
     */
    inline void SetTerminationTime(Aws::Utils::DateTime&& value) { m_terminationTimeHasBeenSet = true; m_terminationTime = value; }

    /**
     * <p>Time stamp indicating when this fleet was terminated. Format is an integer
     * representing the number of seconds since the Unix epoch (Unix time).</p>
     */
    inline FleetAttributes& WithTerminationTime(const Aws::Utils::DateTime& value) { SetTerminationTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this fleet was terminated. Format is an integer
     * representing the number of seconds since the Unix epoch (Unix time).</p>
     */
    inline FleetAttributes& WithTerminationTime(Aws::Utils::DateTime&& value) { SetTerminationTime(value); return *this;}

    /**
     * <p>Current status of the fleet. Possible fleet states include the following:
     * <ul><li><b>NEW</b> – A new fleet has been defined and desired instances is set
     * to 1. </li><li><b>DOWNLOADING/VALIDATING/BUILDING/ACTIVATING</b> – GameLift is
     * setting up the new fleet, creating new instances with the game build and
     * starting server processes.</li><li><b>ACTIVE</b> – Hosts can now accept game
     * sessions.</li><li><b>ERROR</b> – An error occurred when downloading, validating,
     * building, or activating the fleet.</li><li><b>DELETING</b> – Hosts are
     * responding to a delete fleet request.</li><li><b>TERMINATED</b> – The fleet no
     * longer exists.</li></ul></p>
     */
    inline const FleetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Current status of the fleet. Possible fleet states include the following:
     * <ul><li><b>NEW</b> – A new fleet has been defined and desired instances is set
     * to 1. </li><li><b>DOWNLOADING/VALIDATING/BUILDING/ACTIVATING</b> – GameLift is
     * setting up the new fleet, creating new instances with the game build and
     * starting server processes.</li><li><b>ACTIVE</b> – Hosts can now accept game
     * sessions.</li><li><b>ERROR</b> – An error occurred when downloading, validating,
     * building, or activating the fleet.</li><li><b>DELETING</b> – Hosts are
     * responding to a delete fleet request.</li><li><b>TERMINATED</b> – The fleet no
     * longer exists.</li></ul></p>
     */
    inline void SetStatus(const FleetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Current status of the fleet. Possible fleet states include the following:
     * <ul><li><b>NEW</b> – A new fleet has been defined and desired instances is set
     * to 1. </li><li><b>DOWNLOADING/VALIDATING/BUILDING/ACTIVATING</b> – GameLift is
     * setting up the new fleet, creating new instances with the game build and
     * starting server processes.</li><li><b>ACTIVE</b> – Hosts can now accept game
     * sessions.</li><li><b>ERROR</b> – An error occurred when downloading, validating,
     * building, or activating the fleet.</li><li><b>DELETING</b> – Hosts are
     * responding to a delete fleet request.</li><li><b>TERMINATED</b> – The fleet no
     * longer exists.</li></ul></p>
     */
    inline void SetStatus(FleetStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Current status of the fleet. Possible fleet states include the following:
     * <ul><li><b>NEW</b> – A new fleet has been defined and desired instances is set
     * to 1. </li><li><b>DOWNLOADING/VALIDATING/BUILDING/ACTIVATING</b> – GameLift is
     * setting up the new fleet, creating new instances with the game build and
     * starting server processes.</li><li><b>ACTIVE</b> – Hosts can now accept game
     * sessions.</li><li><b>ERROR</b> – An error occurred when downloading, validating,
     * building, or activating the fleet.</li><li><b>DELETING</b> – Hosts are
     * responding to a delete fleet request.</li><li><b>TERMINATED</b> – The fleet no
     * longer exists.</li></ul></p>
     */
    inline FleetAttributes& WithStatus(const FleetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Current status of the fleet. Possible fleet states include the following:
     * <ul><li><b>NEW</b> – A new fleet has been defined and desired instances is set
     * to 1. </li><li><b>DOWNLOADING/VALIDATING/BUILDING/ACTIVATING</b> – GameLift is
     * setting up the new fleet, creating new instances with the game build and
     * starting server processes.</li><li><b>ACTIVE</b> – Hosts can now accept game
     * sessions.</li><li><b>ERROR</b> – An error occurred when downloading, validating,
     * building, or activating the fleet.</li><li><b>DELETING</b> – Hosts are
     * responding to a delete fleet request.</li><li><b>TERMINATED</b> – The fleet no
     * longer exists.</li></ul></p>
     */
    inline FleetAttributes& WithStatus(FleetStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>Unique identifier for a build.</p>
     */
    inline const Aws::String& GetBuildId() const{ return m_buildId; }

    /**
     * <p>Unique identifier for a build.</p>
     */
    inline void SetBuildId(const Aws::String& value) { m_buildIdHasBeenSet = true; m_buildId = value; }

    /**
     * <p>Unique identifier for a build.</p>
     */
    inline void SetBuildId(Aws::String&& value) { m_buildIdHasBeenSet = true; m_buildId = value; }

    /**
     * <p>Unique identifier for a build.</p>
     */
    inline void SetBuildId(const char* value) { m_buildIdHasBeenSet = true; m_buildId.assign(value); }

    /**
     * <p>Unique identifier for a build.</p>
     */
    inline FleetAttributes& WithBuildId(const Aws::String& value) { SetBuildId(value); return *this;}

    /**
     * <p>Unique identifier for a build.</p>
     */
    inline FleetAttributes& WithBuildId(Aws::String&& value) { SetBuildId(value); return *this;}

    /**
     * <p>Unique identifier for a build.</p>
     */
    inline FleetAttributes& WithBuildId(const char* value) { SetBuildId(value); return *this;}

    /**
     * <p>Deprecated. Server launch parameters are now set using a
     * <code><a>RuntimeConfiguration</a></code> object.</p>
     */
    inline const Aws::String& GetServerLaunchPath() const{ return m_serverLaunchPath; }

    /**
     * <p>Deprecated. Server launch parameters are now set using a
     * <code><a>RuntimeConfiguration</a></code> object.</p>
     */
    inline void SetServerLaunchPath(const Aws::String& value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath = value; }

    /**
     * <p>Deprecated. Server launch parameters are now set using a
     * <code><a>RuntimeConfiguration</a></code> object.</p>
     */
    inline void SetServerLaunchPath(Aws::String&& value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath = value; }

    /**
     * <p>Deprecated. Server launch parameters are now set using a
     * <code><a>RuntimeConfiguration</a></code> object.</p>
     */
    inline void SetServerLaunchPath(const char* value) { m_serverLaunchPathHasBeenSet = true; m_serverLaunchPath.assign(value); }

    /**
     * <p>Deprecated. Server launch parameters are now set using a
     * <code><a>RuntimeConfiguration</a></code> object.</p>
     */
    inline FleetAttributes& WithServerLaunchPath(const Aws::String& value) { SetServerLaunchPath(value); return *this;}

    /**
     * <p>Deprecated. Server launch parameters are now set using a
     * <code><a>RuntimeConfiguration</a></code> object.</p>
     */
    inline FleetAttributes& WithServerLaunchPath(Aws::String&& value) { SetServerLaunchPath(value); return *this;}

    /**
     * <p>Deprecated. Server launch parameters are now set using a
     * <code><a>RuntimeConfiguration</a></code> object.</p>
     */
    inline FleetAttributes& WithServerLaunchPath(const char* value) { SetServerLaunchPath(value); return *this;}

    /**
     * <p>Deprecated. Server launch parameters are now specified using a
     * <code><a>RuntimeConfiguration</a></code> object.</p>
     */
    inline const Aws::String& GetServerLaunchParameters() const{ return m_serverLaunchParameters; }

    /**
     * <p>Deprecated. Server launch parameters are now specified using a
     * <code><a>RuntimeConfiguration</a></code> object.</p>
     */
    inline void SetServerLaunchParameters(const Aws::String& value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters = value; }

    /**
     * <p>Deprecated. Server launch parameters are now specified using a
     * <code><a>RuntimeConfiguration</a></code> object.</p>
     */
    inline void SetServerLaunchParameters(Aws::String&& value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters = value; }

    /**
     * <p>Deprecated. Server launch parameters are now specified using a
     * <code><a>RuntimeConfiguration</a></code> object.</p>
     */
    inline void SetServerLaunchParameters(const char* value) { m_serverLaunchParametersHasBeenSet = true; m_serverLaunchParameters.assign(value); }

    /**
     * <p>Deprecated. Server launch parameters are now specified using a
     * <code><a>RuntimeConfiguration</a></code> object.</p>
     */
    inline FleetAttributes& WithServerLaunchParameters(const Aws::String& value) { SetServerLaunchParameters(value); return *this;}

    /**
     * <p>Deprecated. Server launch parameters are now specified using a
     * <code><a>RuntimeConfiguration</a></code> object.</p>
     */
    inline FleetAttributes& WithServerLaunchParameters(Aws::String&& value) { SetServerLaunchParameters(value); return *this;}

    /**
     * <p>Deprecated. Server launch parameters are now specified using a
     * <code><a>RuntimeConfiguration</a></code> object.</p>
     */
    inline FleetAttributes& WithServerLaunchParameters(const char* value) { SetServerLaunchParameters(value); return *this;}

    /**
     * <p>Location of default log files. When a server process is shut down, Amazon
     * GameLift captures and stores any log files in this location. These logs are in
     * addition to game session logs; see more on game session logs in the <a
     * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-api-server-code">Amazon
     * GameLift Developer Guide</a>. If no default log path for a fleet is specified,
     * GameLift will automatically upload logs stored on each instance at
     * <code>C:\game\logs</code>. Use the GameLift console to access stored logs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetLogPaths() const{ return m_logPaths; }

    /**
     * <p>Location of default log files. When a server process is shut down, Amazon
     * GameLift captures and stores any log files in this location. These logs are in
     * addition to game session logs; see more on game session logs in the <a
     * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-api-server-code">Amazon
     * GameLift Developer Guide</a>. If no default log path for a fleet is specified,
     * GameLift will automatically upload logs stored on each instance at
     * <code>C:\game\logs</code>. Use the GameLift console to access stored logs. </p>
     */
    inline void SetLogPaths(const Aws::Vector<Aws::String>& value) { m_logPathsHasBeenSet = true; m_logPaths = value; }

    /**
     * <p>Location of default log files. When a server process is shut down, Amazon
     * GameLift captures and stores any log files in this location. These logs are in
     * addition to game session logs; see more on game session logs in the <a
     * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-api-server-code">Amazon
     * GameLift Developer Guide</a>. If no default log path for a fleet is specified,
     * GameLift will automatically upload logs stored on each instance at
     * <code>C:\game\logs</code>. Use the GameLift console to access stored logs. </p>
     */
    inline void SetLogPaths(Aws::Vector<Aws::String>&& value) { m_logPathsHasBeenSet = true; m_logPaths = value; }

    /**
     * <p>Location of default log files. When a server process is shut down, Amazon
     * GameLift captures and stores any log files in this location. These logs are in
     * addition to game session logs; see more on game session logs in the <a
     * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-api-server-code">Amazon
     * GameLift Developer Guide</a>. If no default log path for a fleet is specified,
     * GameLift will automatically upload logs stored on each instance at
     * <code>C:\game\logs</code>. Use the GameLift console to access stored logs. </p>
     */
    inline FleetAttributes& WithLogPaths(const Aws::Vector<Aws::String>& value) { SetLogPaths(value); return *this;}

    /**
     * <p>Location of default log files. When a server process is shut down, Amazon
     * GameLift captures and stores any log files in this location. These logs are in
     * addition to game session logs; see more on game session logs in the <a
     * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-api-server-code">Amazon
     * GameLift Developer Guide</a>. If no default log path for a fleet is specified,
     * GameLift will automatically upload logs stored on each instance at
     * <code>C:\game\logs</code>. Use the GameLift console to access stored logs. </p>
     */
    inline FleetAttributes& WithLogPaths(Aws::Vector<Aws::String>&& value) { SetLogPaths(value); return *this;}

    /**
     * <p>Location of default log files. When a server process is shut down, Amazon
     * GameLift captures and stores any log files in this location. These logs are in
     * addition to game session logs; see more on game session logs in the <a
     * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-api-server-code">Amazon
     * GameLift Developer Guide</a>. If no default log path for a fleet is specified,
     * GameLift will automatically upload logs stored on each instance at
     * <code>C:\game\logs</code>. Use the GameLift console to access stored logs. </p>
     */
    inline FleetAttributes& AddLogPaths(const Aws::String& value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(value); return *this; }

    /**
     * <p>Location of default log files. When a server process is shut down, Amazon
     * GameLift captures and stores any log files in this location. These logs are in
     * addition to game session logs; see more on game session logs in the <a
     * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-api-server-code">Amazon
     * GameLift Developer Guide</a>. If no default log path for a fleet is specified,
     * GameLift will automatically upload logs stored on each instance at
     * <code>C:\game\logs</code>. Use the GameLift console to access stored logs. </p>
     */
    inline FleetAttributes& AddLogPaths(Aws::String&& value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(value); return *this; }

    /**
     * <p>Location of default log files. When a server process is shut down, Amazon
     * GameLift captures and stores any log files in this location. These logs are in
     * addition to game session logs; see more on game session logs in the <a
     * href="http://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-api-server-code">Amazon
     * GameLift Developer Guide</a>. If no default log path for a fleet is specified,
     * GameLift will automatically upload logs stored on each instance at
     * <code>C:\game\logs</code>. Use the GameLift console to access stored logs. </p>
     */
    inline FleetAttributes& AddLogPaths(const char* value) { m_logPathsHasBeenSet = true; m_logPaths.push_back(value); return *this; }

    /**
     * <p>Type of game session protection to set for all new instances started in the
     * fleet. <ul><li><b>NoProtection</b> – The game session can be terminated during a
     * scale-down event.</li> <li><b>FullProtection</b> – If the game session is in an
     * <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</li></ul></p>
     */
    inline const ProtectionPolicy& GetNewGameSessionProtectionPolicy() const{ return m_newGameSessionProtectionPolicy; }

    /**
     * <p>Type of game session protection to set for all new instances started in the
     * fleet. <ul><li><b>NoProtection</b> – The game session can be terminated during a
     * scale-down event.</li> <li><b>FullProtection</b> – If the game session is in an
     * <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</li></ul></p>
     */
    inline void SetNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = value; }

    /**
     * <p>Type of game session protection to set for all new instances started in the
     * fleet. <ul><li><b>NoProtection</b> – The game session can be terminated during a
     * scale-down event.</li> <li><b>FullProtection</b> – If the game session is in an
     * <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</li></ul></p>
     */
    inline void SetNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { m_newGameSessionProtectionPolicyHasBeenSet = true; m_newGameSessionProtectionPolicy = value; }

    /**
     * <p>Type of game session protection to set for all new instances started in the
     * fleet. <ul><li><b>NoProtection</b> – The game session can be terminated during a
     * scale-down event.</li> <li><b>FullProtection</b> – If the game session is in an
     * <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</li></ul></p>
     */
    inline FleetAttributes& WithNewGameSessionProtectionPolicy(const ProtectionPolicy& value) { SetNewGameSessionProtectionPolicy(value); return *this;}

    /**
     * <p>Type of game session protection to set for all new instances started in the
     * fleet. <ul><li><b>NoProtection</b> – The game session can be terminated during a
     * scale-down event.</li> <li><b>FullProtection</b> – If the game session is in an
     * <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</li></ul></p>
     */
    inline FleetAttributes& WithNewGameSessionProtectionPolicy(ProtectionPolicy&& value) { SetNewGameSessionProtectionPolicy(value); return *this;}

  private:
    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;
    Aws::Utils::DateTime m_terminationTime;
    bool m_terminationTimeHasBeenSet;
    FleetStatus m_status;
    bool m_statusHasBeenSet;
    Aws::String m_buildId;
    bool m_buildIdHasBeenSet;
    Aws::String m_serverLaunchPath;
    bool m_serverLaunchPathHasBeenSet;
    Aws::String m_serverLaunchParameters;
    bool m_serverLaunchParametersHasBeenSet;
    Aws::Vector<Aws::String> m_logPaths;
    bool m_logPathsHasBeenSet;
    ProtectionPolicy m_newGameSessionProtectionPolicy;
    bool m_newGameSessionProtectionPolicyHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws