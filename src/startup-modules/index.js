import fs from "fs";
import path from "path";
import getStartupModuleDirectory from "./config.js";

const startupModuleDir = getStartupModuleDirectory();
const startupModuleFiles = fs.readdirSync(startupModuleDir);

const startupModules = [];

for (const moduleFileName of startupModuleFiles) {
  if (!moduleFileName.includes('.м')) {
    continue;
  }

  const moduleFilePath = path.join(startupModuleDir, moduleFileName).replaceAll("\\", "/");

  const moduleContent = fs.readFileSync(moduleFilePath).toString();

  startupModules.push({
    name: moduleFileName,
    content: moduleContent
  });
}

export default startupModules;
