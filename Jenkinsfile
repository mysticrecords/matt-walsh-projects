  node {
      stage('Build') {
          echo 'Building....'
          
      }
      stage('Test') {
        
        workspace = env.WORKSPACE
        echo "Current workspace is ${env.WORKSPACE}"

        sh "cd /Users/mattwalsh/Documents/Projects/matt-walsh-projects/Unit_Test_Example"

        echo "Current workspace is ${env.WORKSPACE}"

        // sh "./Unit_Test_Example/unittests.sh"
      }
      stage('Deploy') {
          echo 'Deploying....'
} }