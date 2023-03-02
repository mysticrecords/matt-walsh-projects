  node {
      stage('Build') {
          echo 'Building....'
          
      }
      stage('Test') {
        
        workspace = env.WORKSPACE
        echo "Current workspace is ${env.WORKSPACE}"

        dir("/Users/mattwalsh/.jenkins/workspace/matt-wash-projects_main/Unit_Test_Example") {
             echo "Current workspace is ${env.WORKSPACE}"

        sh "./Unit_Test_Example/unittests.sh"
        }

      }
      stage('Deploy') {
          echo 'Deploying....'
} }