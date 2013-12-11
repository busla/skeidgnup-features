<?php
/**
 * @file
 * skeidgnup_post.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function skeidgnup_post_taxonomy_default_vocabularies() {
  return array(
    'committee' => array(
      'name' => 'Nefnd',
      'machine_name' => 'committee',
      'description' => 'Nefndir sem starfa hjá sveitastjórn.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'tax_category' => array(
      'name' => 'Efnisflokkur',
      'machine_name' => 'tax_category',
      'description' => 'Listi af flokkum fyrir færslur.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
