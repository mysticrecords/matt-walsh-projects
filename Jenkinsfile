  node {
      stage('Build') {
          echo 'Building....'
          
      }
      stage('Test') {
        
        workspace = env.WORKSPACE
        echo "Current workspace is ${env.WORKSPACE}"

        dir("cd /Users/mattwalsh/.jenkins/workspace/matt-wash-projects_main/Unit_Test_Example") {
             workspace = env.WORKSPACE
        echo "Current workspace is ${env.WORKSPACE}"
        }

        echo "Current workspace is ${env.WORKSPACE}"

        // sh "./Unit_Test_Example/unittests.sh"
      }
      stage('Deploy') {
          echo 'Deploying....'
} }